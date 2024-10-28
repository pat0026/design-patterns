include(design_pattern)
design_pattern(TARGET Memento)


target_link_libraries(Memento PUBLIC Boost::boost Boost::date_time)
target_link_libraries(Memento PRIVATE fmt::fmt)